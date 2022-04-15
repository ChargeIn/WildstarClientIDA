//----- (000000014065CA30) ----------------------------------------------------
__int64 __fastcall sub_14065CA30(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64* v4; // rcx
	int v5; // eax
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *v2);
		if (v3)
		{
			if (v3 == *(_QWORD*)(qword_140C65898 + 120))
			{
				v4 = (__int64*)dword_140A12138;
				if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
					v4 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
				v5 = *((_DWORD*)v4 + 2);
				if (v5 != 3)
				{
					if (v5 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v10))
					{
						v6 = 0;
						goto LABEL_11;
					}
					v9 = 3;
					v4 = &v8;
					v8 = v10;
				}
				v6 = (int)*(double*)v4;
			LABEL_11:
				LODWORD(v10) = BYTE1(v6);
				HIDWORD(v10) = (unsigned __int8)v6;
				sub_14053BBA0(v6, (__int64)&v10);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

