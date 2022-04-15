//----- (000000014065CB00) ----------------------------------------------------
__int64 __fastcall sub_14065CB00(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // r8
	_DWORD* v5; // rcx
	__int64* v6; // rcx
	int v7; // edi
	int v8; // eax
	BOOL v9; // eax
	int v10; // eax
	unsigned int v11; // edx
	unsigned __int64 v12; // r9
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rax
	_DWORD* v15; // rax
	__int64 v17; // [rsp+20h] [rbp-18h] BYREF
	int v18; // [rsp+28h] [rbp-10h]
	__int64 v19; // [rsp+48h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v7 = 0;
	LABEL_26:
		v15 = *(_DWORD**)(a1 + 16);
		v15[2] = 1;
		*v15 = v7;
		goto LABEL_27;
	}
	v4 = qword_140C65898;
	if (v3 == *(_QWORD*)(qword_140C65898 + 120))
	{
		v6 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
			v6 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
		v7 = 0;
		v8 = *((_DWORD*)v6 + 2);
		if (v8 != 3)
		{
			if (v8 != 4 || (v9 = sub_14005AC80((char*)(*v6 + 32), (unsigned __int64*)&v19), v4 = qword_140C65898, !v9))
			{
				LOWORD(v10) = 0;
			LABEL_12:
				HIDWORD(v19) = (unsigned __int8)v10;
				LODWORD(v19) = BYTE1(v10);
				v11 = (unsigned __int16)v10;
				v12 = *(_QWORD*)(v4 + 29656);
				v13 = v12;
				v14 = *(_QWORD*)(v12 + 8);
				while (v14)
				{
					if (*(_DWORD*)(v14 + 32) < v11)
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v13 = v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				}
				if (v13 == v12 || (v19 = v13, v11 < *(_DWORD*)(v13 + 32)))
					v19 = v12;
				LOBYTE(v7) = v19 != v12 && *(_DWORD*)(v19 + 36) != 0;
				goto LABEL_26;
			}
			v18 = 3;
			v6 = &v17;
			v17 = v19;
		}
		v10 = (int)*(double*)v6;
		goto LABEL_12;
	}
	v5 = *(_DWORD**)(a1 + 16);
	*v5 = 0;
	v5[2] = 1;
LABEL_27:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 14065CBD5: conditional instruction was optimized away because ecx.4<100u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

