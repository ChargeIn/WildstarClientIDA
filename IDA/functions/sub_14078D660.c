//----- (000000014078D660) ----------------------------------------------------
__int64 __fastcall sub_14078D660(_QWORD* a1)
{
	int v1; // ebx
	unsigned int v2; // ebp
	__int64 v4; // r14
	__int64* v5; // rax
	int v6; // ecx
	int v7; // edi
	_DWORD* v8; // rax
	int v9; // ecx
	_DWORD* v10; // rax
	const char* v11; // r10
	__int64 v12; // rax
	const char* v13; // r9
	const char* v14; // rax
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	int v17; // [rsp+28h] [rbp-30h]
	__int64 v18; // [rsp+60h] [rbp+8h] BYREF
	unsigned __int64 v19; // [rsp+68h] [rbp+10h] BYREF

	v1 = 1;
	v2 = -1;
	v4 = (__int64)(a1[2] - a1[3]) >> 4;
	if ((int)v4 >= 1)
	{
		do
		{
			v5 = (__int64*)sub_1400580E0((__int64)a1, v1);
			v6 = *((_DWORD*)v5 + 2);
			if (v6 != 3)
			{
				if (v6 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v18))
				{
					v7 = 0;
				LABEL_7:
					v8 = sub_1400580E0((__int64)a1, v1);
					v9 = v8[2];
					if (v9 != 3 && (v9 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v19)))
					{
						v10 = sub_1400580E0((__int64)a1, v1);
						if (v10 == dword_140A12138 || (v12 = (int)v10[2], (_DWORD)v12 == -1))
							v13 = aNoValue;
						else
							v13 = off_140A123B0[v12];
						v14 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v11, v13);
						sub_140056570(a1, v1, v14);
					}
					goto LABEL_16;
				}
				v17 = 3;
				v5 = &v16;
				v16 = v18;
			}
			v7 = (int)*(double*)v5;
			if (!v7)
				goto LABEL_7;
		LABEL_16:
			++v1;
			v2 &= v7;
		} while (v1 <= (int)v4);
	}
	return v2;
}
// 14078D76A: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

