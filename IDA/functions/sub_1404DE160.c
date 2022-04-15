//----- (00000001404DE160) ----------------------------------------------------
__int64 __fastcall sub_1404DE160(_QWORD* a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v6; // rbx
	_WORD* v7; // rax
	unsigned int v8; // ebp
	__int64 v9; // rcx
	__int64 v10; // rbp
	int* v11; // rax
	__int64 v12; // rcx
	_QWORD* v14; // rax
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	__int64 v16; // [rsp+28h] [rbp-30h]

	result = sub_140245C00(a2);
	v5 = result;
	if (result)
	{
		v6 = 0i64;
		v7 = (_WORD*)a1[16];
		if (v7 != (_WORD*)a1[17])
		{
			*v7 = 0;
			a1[17] = a1[16];
		}
		v8 = *(_DWORD*)(v5 + 12);
		if (sub_140444550(qword_140C658F0, v8))
		{
			v10 = sub_1402096E0(v8);
			if (v10)
			{
				v11 = (int*)sub_14034BDD0(v9, *(_DWORD*)(v5 + 4));
				if (!v11 || !*(_WORD*)v11)
					v11 = (int*)sub_14034BDD0(v12, *(_DWORD*)(v10 + 176));
				if (v11 && *(_WORD*)v11)
				{
					while (*((_WORD*)v11 + ++v6) != 0)
						;
					sub_14001C480((__int64)(a1 + 15), v11, (int*)((char*)v11 + 2 * v6));
				}
			}
		}
		if (a1[16] == a1[17])
		{
			v14 = sub_14018EFA0(&v15, (__int64)L"##-- Schematic %d not found -##", a2);
			if (v14 != a1 + 15)
				sub_14001C480((__int64)(a1 + 15), (int*)v14[1], (int*)v14[2]);
			if (v16)
				sub_14018B900(v16, 0);
		}
		return a1[16];
	}
	return result;
}
// 1404DE1DA: variable 'v9' is possibly undefined
// 1404DE1EF: variable 'v12' is possibly undefined
// 140B0AE10: using guessed type wchar_t aSchematicDNotF[32];
// 140C658F0: using guessed type __int64 qword_140C658F0;

