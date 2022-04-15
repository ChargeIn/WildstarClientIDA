//----- (0000000140167610) ----------------------------------------------------
__int64 __fastcall sub_140167610(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // edi
	unsigned int v4; // ebp
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rcx
	int v8; // edx
	__int64 v9; // r9
	_DWORD* v10; // rdx
	double v11; // xmm0_8
	__int64 v12; // rcx
	int v13; // eax
	_DWORD* v14; // rdx
	unsigned __int64 v15; // rcx
	_DWORD* v16; // r8
	double v18; // [rsp+58h] [rbp+10h]

	v2 = sub_1401657E0(a1);
	v3 = 0;
	v4 = *(_DWORD*)(v2 + 1160);
	v5 = v2;
	if (v4)
	{
		do
		{
			if (*(int*)(v5 + 1144) <= 0
				|| v3 < 0
				|| v3 >= *(_DWORD*)(v5 + 1160)
				|| (v6 = *(_QWORD*)(*(_QWORD*)(v5 + 1152) + 8i64 * v3), *(int*)(v6 + 24) <= 0))
			{
				v7 = 0i64;
			}
			else
			{
				v7 = **(_QWORD**)(v6 + 16);
			}
			v8 = *(_DWORD*)(v7 + 176);
			v9 = *(_QWORD*)(a1[4] + 160i64);
			if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v9 + 56))
			{
				v11 = (double)v8;
				if ((double)v8 == 0.0)
				{
					v10 = *(_DWORD**)(v9 + 32);
				}
				else
				{
					v18 = (double)v8;
					v10 = (_DWORD*)(*(_QWORD*)(v9 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v18) + HIDWORD(v18)) % (((1i64 << *(_BYTE*)(v9 + 11)) - 1) | 1)));
				}
				while (v10[6] != 3 || v11 != *((double*)v10 + 2))
				{
					v10 = (_DWORD*)*((_QWORD*)v10 + 4);
					if (!v10)
					{
						v10 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v10 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64 * (v8 - 1));
			}
			v12 = a1[2];
			*(_QWORD*)v12 = *(_QWORD*)v10;
			v13 = v10[2];
			v14 = dword_140A12138;
			*(_DWORD*)(v12 + 8) = v13;
			a1[2] += 16i64;
			v15 = a1[2];
			v16 = (_DWORD*)(v15 - 16);
			if (a1[3] + 16i64 < v15)
				v14 = (_DWORD*)(a1[3] + 16i64);
			if (v14 == dword_140A12138
				|| v16 == dword_140A12138
				|| v14[2] != v16[2]
				|| !(unsigned int)sub_14005F0D0((__int64)a1, v14, v16))
			{
				a1[2] -= 16i64;
				++v3;
			}
			else
			{
				sub_140160120(v5, v3);
				v4 = *(_DWORD*)(v5 + 1160);
				a1[2] -= 16i64;
			}
		} while (v3 < v4);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

