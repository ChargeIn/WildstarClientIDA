//----- (00000001406111A0) ----------------------------------------------------
char* __fastcall sub_1406111A0(_DWORD* a1, __int64 a2, int a3)
{
	unsigned int v3; // ebx
	__int64 v4; // rax
	unsigned int v6; // r12d
	__int64 v7; // rsi
	int* v8; // r15
	int v9; // ebp
	int v10; // esi
	int v11; // edi
	int* v12; // rax
	int v13; // ecx
	int v16; // [rsp+70h] [rbp+18h]

	v16 = a3;
	v3 = 0;
	*(_QWORD*)a1 = a2;
	v4 = a2;
	v6 = 0;
	if (*(_DWORD*)(a2 + 16))
	{
		do
		{
			if (v6 <= *(_DWORD*)(v4 + 16))
			{
				v7 = *(_QWORD*)(v4 + 8i64 * v6 + 24);
				if (v7)
				{
					v8 = sub_14018B280(64i64, 0);
					if (v8)
					{
						v9 = *(_DWORD*)(v7 + 12);
						v10 = *(_DWORD*)(v7 + 4);
						v11 = **(_DWORD**)(*(_QWORD*)a1 + 8i64);
						*(_QWORD*)v8 = off_140B6CBD0;
						v12 = sub_14018B280(24i64, 0);
						*((_QWORD*)v8 + 2) = v12;
						*(_QWORD*)v12 = v12;
						*(_QWORD*)(*((_QWORD*)v8 + 2) + 8i64) = *((_QWORD*)v8 + 2);
						*((_QWORD*)v8 + 3) = 0i64;
						*((_QWORD*)v8 + 4) = 0i64;
						v8[10] = v11;
						*(_QWORD*)v8 = off_140B6F9D0;
						v8[12] = v10;
						v8[13] = v9;
						v8[14] = 0;
					}
					else
					{
						v8 = 0i64;
					}
					*(_QWORD*)&a1[2 * v6 + 4] = v8;
				}
			}
			++v6;
			v4 = a2;
		} while (v6 < *(_DWORD*)(*(_QWORD*)a1 + 16i64));
		a3 = v16;
	}
	if (a1[2] != a3)
	{
		a1[2] = a3;
		if (a3 == 1)
		{
			v13 = dword_140C636A8;
			a1[19] = dword_140C636A8;
			a1[18] = v13 + 10000;
			if (*(_DWORD*)(*(_QWORD*)a1 + 16i64))
			{
				do
				{
					if ((unsigned int)sub_140553790(*(_QWORD*)a1, v3))
						a1[v3 + 20] = dword_140C636A8;
					++v3;
				} while (v3 < *(_DWORD*)(*(_QWORD*)a1 + 16i64));
			}
		}
	}
	return sub_140611710((__int64)a1);
}
// 140B6CBD0: using guessed type __int64 (__fastcall *off_140B6CBD0[6])();
// 140B6F9D0: using guessed type __int64 (__fastcall *off_140B6F9D0[51])();
// 140C636A8: using guessed type int dword_140C636A8;

