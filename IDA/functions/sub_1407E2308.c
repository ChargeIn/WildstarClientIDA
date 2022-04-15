//----- (00000001407E2308) ----------------------------------------------------
void sub_1407E2308()
{
	void (**i)(void); // rbx

	for (i = &qword_140B7E028; i < &qword_140B7E028; ++i)
	{
		if (*i)
			(*i)();
	}
}
// 140B7E028: using guessed type void (*qword_140B7E028)(void);

