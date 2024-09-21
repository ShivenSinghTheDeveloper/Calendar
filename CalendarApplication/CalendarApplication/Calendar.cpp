#include "Calendar.h"
void Calendar::setId(int id) {
	Id = id;
}
void Calendar::setDate(DateTime date) {
	Date = date;
}
void Calendar::setTime(TimeSpan time) {
	Time = time;
}
void Calendar::setLength(Decimal length) {
	Length = length;
}
void Calendar::setNotes(String^ notes) {
	Notes = notes;
}
int Calendar::getId() {
	return Id;
}
DateTime Calendar::getDate() {
	return Date;
}
TimeSpan Calendar::getTime() {
	return Time;
}
Decimal Calendar::getLength() {
	return Length;
}
String^ Calendar::getNotes() {
	return Notes;
}