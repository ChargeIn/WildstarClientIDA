//----- (0000000140185550) ----------------------------------------------------
void __fastcall sub_140185550(__int64 a1)
{
	__int64 v2; // rbx
	int* v3; // rax
	int* v4; // r8
	__int64 v5; // rcx
	int* v6; // rax
	int* v7; // rsi
	int* v8; // rbp
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rbx
	unsigned __int64 v11; // rbx
	int* v12; // rsi
	int* v13; // rbx
	__int64 v14; // [rsp+30h] [rbp-28h] BYREF
	char* v15; // [rsp+38h] [rbp-20h]
	char* v16; // [rsp+40h] [rbp-18h]
	int* v17; // [rsp+48h] [rbp-10h]

	if (!*(_BYTE*)(a1 + 224))
	{
		v2 = 0i64;
		v3 = sub_14018B280(16i64, 0);
		v4 = v3;
		v15 = (char*)v3;
		v16 = (char*)v3;
		v17 = v3 + 4;
		if (v3)
		{
			*(_WORD*)v3 = 0;
			v4 = (int*)v15;
		}
		v5 = *(_QWORD*)(a1 + 88);
		if (v5)
		{
			if (*(_BYTE*)(v5 + 312) && *(_DWORD*)(v5 + 536) == 4)
			{
				v6 = (int*)sub_140137860(v5);
				v7 = v6;
				if (*(_WORD*)v6)
				{
					do
						++v2;
					while (*((_WORD*)v6 + v2));
				}
				v8 = (int*)((char*)v6 + 2 * v2);
				v9 = (v16 - v15) >> 1;
				v10 = (2 * v2) >> 1;
				if (v10 <= v9)
				{
					v11 = 2 * v10;
					sub_1407DB590((int*)v15, v6, v11);
					v12 = (int*)v16;
					v13 = (int*)&v15[v11];
					if (v13 != (int*)v16)
					{
						sub_1407DB590(v13, (int*)v16, 2ui64);
						v12 = (int*)&v16[-2 * ((v16 - (char*)v13) >> 1)];
						v16 = (char*)v12;
					}
					goto LABEL_16;
				}
				sub_1407DB590((int*)v15, v6, 2 * v9);
				sub_14001C310(&v14, (int*)((char*)v7 + 2 * ((v16 - v15) >> 1)), v8);
			LABEL_15:
				v12 = (int*)v16;
			LABEL_16:
				*(_BYTE*)(a1 + 224) = 1;
				if (v15 == (char*)v12)
					sub_140185040((_QWORD*)a1);
				else
					sub_1401340D0(a1, v15);
				v4 = (int*)v15;
			}
		}
		else if (*(_QWORD*)(a1 + 104) == *(_QWORD*)(a1 + 112))
		{
			sub_1400C35B0(qword_140C63650, *(int**)(a1 + 136));
			sub_1400F3010(*(_QWORD*)(a1 + 8) + 384i64, 0i64, *(_DWORD*)(a1 + 64), (__int64)"OnLoad", ">S", &v14);
			goto LABEL_15;
		}
		if (v4)
			sub_14018B900((__int64)v4, 0);
	}
}
// 1401340D0: using guessed type __int64 __fastcall sub_1401340D0(_QWORD, _QWORD);
// 140C63650: using guessed type __int64 qword_140C63650;

