#ifndef__HEADER_H
#define__HEADER_H
void addBookInDataBase();
void deleteBooks();
void headMessage(const char *message);
void init();
int isFileExists(const char *path);
int  IsLeapYear(int year);
int isNameValid(const char *name);
int isValidDate(Date *validDate);
void login();
int main();
void menu();
void printMessageCenter(const char* message);
void searchBooks();
void updateCredential(void);
void viewBooks();
#endif



