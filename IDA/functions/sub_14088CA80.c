//----- (000000014088CA80) ----------------------------------------------------
char __fastcall sub_14088CA80(_QWORD* a1, int a2)
{
	__int64* i; // rax

	for (i = (__int64*)a1[8]; i; i = (__int64*)*i)
	{
		if (*((_DWORD*)i + 4) == a2 && i[3] + *((unsigned int*)i + 8) >= a1[1] - *(_QWORD*)(a1[2] + 112i64))
			return 0;
	}
	return 1;
}

