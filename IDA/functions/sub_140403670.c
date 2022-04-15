//----- (0000000140403670) ----------------------------------------------------
__int64 __fastcall sub_140403670(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // r14
	unsigned int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rcx
	int* v6; // rdi
	unsigned __int64 v7; // r15
	unsigned __int64 i; // rbp
	__int64 v9; // rax
	int* v10; // rsi
	__int64 v11; // rbx
	unsigned __int64 v12; // rbx
	int* v13; // r8
	char* v14; // rcx
	char v16; // [rsp+20h] [rbp-48h] BYREF

	v2 = (_QWORD*)qword_140C658A0;
	v3 = *a2;
	*(_DWORD*)(qword_140C658A0 + 200) = *a2;
	v4 = sub_14024DB80(v3);
	if (!v4 || (v6 = (int*)sub_14034BDD0(v5, *(_DWORD*)(v4 + 4))) == 0i64)
		v6 = (int*)&unk_1409E87A4;
	v7 = v2[1];
	for (i = 0i64; i < v7; ++i)
	{
		if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 8 * i) + 8i64) + 52i64) & 0x400) != 0)
		{
			v9 = 0i64;
			v10 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v9;
				while (*((_WORD*)v6 + v9));
			}
			v11 = (2 * v9) >> 1;
			if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v10 = sub_14018B280(2 * (v11 + 1), 0);
			v12 = 2 * v11;
			sub_1407DB590(v10, v6, v12);
			v13 = (int*)((char*)v10 + v12);
			if ((int*)((char*)v10 + v12))
				*(_WORD*)v13 = 0;
			v14 = (char*)(*(_QWORD*)(*v2 + 8 * i) + 248i64);
			if (&v16 != v14)
				sub_14001C480((__int64)v14, v10, v13);
			if (v10)
				sub_14018B900((__int64)v10, 0);
		}
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatZoneChange", L"S", v6);
	return 0i64;
}
// 14040369A: variable 'v5' is possibly undefined
// 1409EE15C: using guessed type wchar_t aS_35[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

