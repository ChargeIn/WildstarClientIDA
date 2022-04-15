//----- (0000000140195230) ----------------------------------------------------
int __fastcall sub_140195230(__int64 a1)
{
	int v2; // edi
	__int64* v3; // rbx
	bool v4; // zf
	__int64 v5; // rax

	v2 = 5;
	v3 = (__int64*)(a1 + 240);
	*(_QWORD*)a1 = off_140B5E6A8;
	do
	{
		v4 = *(v3 - 3) == 0;
		v3 -= 4;
		if (!v4)
		{
			sub_1401961E0((__int64)(v3 - 1), *(_QWORD*)(*v3 + 8));
			*(_QWORD*)(*v3 + 16) = *v3;
			*(_QWORD*)(*v3 + 8) = 0i64;
			*(_QWORD*)(*v3 + 24) = *v3;
			v3[1] = 0i64;
		}
		sub_14018B900(*v3, 0);
		--v2;
	} while (v2 >= 0);
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
		LODWORD(v5) = CloseHandle(*(HANDLE*)(a1 + 32));
	return v5;
}
// 140B5E6A8: using guessed type __int64 (__fastcall *off_140B5E6A8[9])();

