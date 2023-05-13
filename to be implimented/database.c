// Don't ask why I have all of these
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "sqlite3.h"
#include "structs.c"

char dbname[] = "data/userdata.db";
sqlite3 *db;
char *sql;
char sqlbuffer[100];
char *err_msg = 0;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
  int i;

  for (i = 0; i < argc; i++) {
    if (strcmp(azColName[i], "id") == 0 || strcmp(azColName[i], "badges") == 0) {
      printf("%s = %d\n", azColName[i], argv[i] ? atoi(argv[i]) : 0);
    } else if (strcmp(azColName[i], "username") == 0) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
  }

  printf("\n");
  return 0;
}

int createDatabase(){
  int db = sqlite3_open(dbname, &db);
  if(db != SQLITE_OK){
    printf("Error: 0x02");
    return 0x02;
  }
}

int creatPlayer(char username[]){
  int rc = sqlite3_open(dbname, &db);
  if (rc != SQLITE_OK){
    printf("Error: 0x01");
  }
  sprintf(sqlbuffer, "INSERT INTO users (username) VALUES (%s)", username);
  strcpy(sql, sqlbuffer);
  rc = sqlite3_exec(db, sql, callback, 0, &err_msg);

}

int savePlayer(){

}

struct playerData getPlayerData(char username[]){
  struct playerData player;
  strcpy(player.username, username);
  return player;
}

int deletePlayer(){

}

int main() {
  sqlite3 *db;
  char *err_msg = 0;

  int rc = sqlite3_open("test.db", &db);

  if (rc != SQLITE_OK) {
    fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
    sqlite3_close(db);
    return 1;
  }

  char *sql = "SELECT * FROM Users;";

  rc = sqlite3_exec(db, sql, callback, 0, &err_msg);

  if (rc != SQLITE_OK ) {
    fprintf(stderr, "SQL error: %s\n", err_msg);
    sqlite3_free(err_msg);
    sqlite3_close(db);
    return 1;
  }

  sqlite3_close(db);
  return 0;
}