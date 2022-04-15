//----- (000000014044F8C0) ----------------------------------------------------
__int64 __fastcall sub_14044F8C0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdi
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v7; // r10
	unsigned __int64 v8; // rax
	unsigned int v9; // r9d
	char v11[8]; // [rsp+30h] [rbp-58h] BYREF
	int* v12; // [rsp+38h] [rbp-50h]
	__int64 v13; // [rsp+40h] [rbp-48h]
	__int128 v14; // [rsp+50h] [rbp-38h]
	__int64 v15; // [rsp+60h] [rbp-28h]
	__int64 v16; // [rsp+68h] [rbp-20h]
	__int64 v17; // [rsp+70h] [rbp-18h]
	__int64 v18; // [rsp+78h] [rbp-10h]

	v4 = 0i64;
	v12 = sub_14018B280(40i64, 0);
	v13 = 0i64;
	*(_BYTE*)v12 = 0;
	v5 = 0i64;
	*((_QWORD*)v12 + 1) = 0i64;
	*((_QWORD*)v12 + 2) = v12;
	*((_QWORD*)v12 + 3) = v12;
	v6 = *(_QWORD*)(a1 + 96);
	v16 = 0i64;
	v14 = 0i64;
	v15 = 0i64;
	v18 = 0i64;
	v17 = 0i64;
	if (v6)
	{
		v7 = *(_QWORD*)(a1 + 88);
		do
		{
			v8 = v5 + ((v6 - v5) >> 1);
			v9 = **(_DWORD**)(v7 + 8 * v8);
			if (a2 < v9)
			{
				v6 = v5 + ((v6 - v5) >> 1);
			}
			else
			{
				if (a2 <= v9)
				{
					v4 = *(_QWORD*)(v7 + 8 * v8);
					break;
				}
				v5 = v8 + 1;
			}
		} while (v5 < v6);
	}
	sub_140008410((__int64)v11);
	sub_14018B900((__int64)v12, 0);
	return v4;
}
// 14044F8C0: using guessed type char var_58[8];

