#pragma once
using namespace System;

public ref class Calendar {
	private:
		int Id;
		DateTime Date;
		TimeSpan Time;
		Decimal Length;
		String^ Notes;
	public:
		void setId(int id);
		void setDate(DateTime date);
		void setTime(TimeSpan time);
		void setLength(Decimal length);
		void setNotes(String^ notes);
		int getId();
		DateTime getDate();
		TimeSpan getTime();
		Decimal getLength();
		String^ getNotes();
};