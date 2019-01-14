/* NotifTest.c
   A simple program based on a notification system that updates
   the number of new and old notifications. */

#include <stdio.h>

int newNotificationNum = 0;
int oldNotificationNum = 0;
int menuSelect;
char notifMessage[20];

void notificationMake(){
	printf("\n\nInsert a message.\n");
	scanf("%s", notifMessage);
	oldNotificationNum = newNotificationNum;
	newNotificationNum++;
	main();
}

notificationDelete(){
	int notifDeleteSelect;
	
	printf("How many do you want deleted?: ");
	scanf("%d", &notifDeleteSelect);
	
	if(newNotificationNum == 0){
		oldNotificationNum = newNotificationNum;
		main();
	} else{
		oldNotificationNum = newNotificationNum;
		newNotificationNum = newNotificationNum - notifDeleteSelect;
		main();
	}
}

int main(){
	printf("Notification menu.\n");
	printf("Notifications: New %d - Old %d", newNotificationNum, oldNotificationNum);
	printf("\n\n1. Add a notification\n2. Delete notifications\n3. Exit\nChoose an option: ");
	scanf("%d", &menuSelect);
	if(menuSelect == 1){
		notificationMake();
	} else if(menuSelect == 2){
		notificationDelete();
	} else if(menuSelect == 3){
		return 0;
	}
	return 0;
}