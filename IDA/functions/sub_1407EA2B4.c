//----- (00000001407EA2B4) ----------------------------------------------------
__int64 sub_1407EA2B4()
{
	unsigned int v0; // edi
	int i; // ebx
	unsigned __int64 v2; // rcx

	v0 = 0;
	sub_1407E2340(1);
	for (i = 3; i < dword_140DC5330; ++i)
	{
		v2 = *((_QWORD*)lpMem + i);
		if (v2)
		{
			if ((*(_BYTE*)(v2 + 24) & 0x83) != 0 && (unsigned int)sub_1407E089C(v2) != -1)
				++v0;
			if (i >= 20)
			{
				DeleteCriticalSection((LPCRITICAL_SECTION)(*((_QWORD*)lpMem + i) + 48i64));
				sub_1407E14C0(*((LPVOID*)lpMem + i));
				*((_QWORD*)lpMem + i) = 0i64;
			}
		}
	}
	sub_1407E2528(1);
	return v0;
}
// 140DC5330: using guessed type int dword_140DC5330;

