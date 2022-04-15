//----- (0000000140525690) ----------------------------------------------------
void __fastcall sub_140525690(_QWORD* a1)
{
	void(__fastcall * **v2)(_QWORD, __int64); // rcx
	int v3; // edi
	_QWORD* v4; // rbx
	int i; // esi
	unsigned int v6; // edx
	_QWORD* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rbx
	int j; // edi
	unsigned int v12; // edx
	__int64 v13; // rdx

	*a1 = off_140B6C180;
	v2 = (void(__fastcall***)(_QWORD, __int64))a1[184];
	if (v2)
		(**v2)(v2, 1i64);
	v3 = 7;
	v4 = a1 + 238;
	a1[184] = 0i64;
	for (i = 7; i >= 0; --i)
	{
		v6 = *((_DWORD*)v4 - 1);
		v4 = (_QWORD*)((char*)v4 - 4);
		sub_1401429A0(qword_140C63678, v6);
	}
	v7 = a1 + 234;
	do
	{
		v8 = *(v7 - 6);
		v7 -= 6;
		if (v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			*v7 = 0i64;
		}
		v9 = v7[3];
		if (v9)
			sub_14018B900(v9, 0);
		--v3;
	} while (v3 >= 0);
	v10 = a1 + 183;
	for (j = 5; j >= 0; --j)
	{
		v12 = *((_DWORD*)v10 - 1);
		v10 = (_QWORD*)((char*)v10 - 4);
		sub_1401429A0(qword_140C63678, v12);
	}
	sub_1400C4170((__int64)(a1 + 128));
	sub_1400C6030((__int64)a1, v13);
}
// 140525790: variable 'v13' is possibly undefined
// 140B6C180: using guessed type __int64 (__fastcall *off_140B6C180[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

