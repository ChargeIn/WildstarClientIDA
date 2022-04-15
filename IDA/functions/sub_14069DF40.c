//----- (000000014069DF40) ----------------------------------------------------
void sub_14069DF40()
{
	int* v0; // rax
	__int64 v1; // rbx

	if ((unsigned __int64)qword_140C7E9C8 > 0x40)
	{
		qword_140C7E9C8 = 64i64;
	}
	else
	{
		v0 = sub_14018DB00(qword_140C7E9C0, 0x40ui64, 8i64);
		v1 = (__int64)v0;
		if ((int*)qword_140C7E9C0 != v0)
		{
			sub_1407DB590(v0, (int*)qword_140C7E9C0, 8 * qword_140C7E9C8);
			if (qword_140C7E9C0)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C7E9C0 - 16) + 8i64))(qword_140C7E9C0 - 16);
			qword_140C7E9C0 = v1;
		}
		qword_140C7E9C8 = 64i64;
	}
}
// 140C7E9C0: using guessed type __int64 qword_140C7E9C0;
// 140C7E9C8: using guessed type __int64 qword_140C7E9C8;

