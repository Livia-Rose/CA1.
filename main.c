#include <stdio.h>

int main() {
    int choice;
    
    printf("Choose an option:\n");
    printf("1. Say Hello\n");
    printf("2. Display a number\n");
    printf("3. Show today's date\n");
    printf("4. Exit\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice) {
