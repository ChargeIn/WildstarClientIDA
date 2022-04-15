//----- (000000014011C240) ----------------------------------------------------
__int64 __fastcall sub_14011C240(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v8; // rdi
	__int64* v9; // rcx
	int v10; // eax
	int v11; // eax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				return 0i64;
		}
		v8 = *(_QWORD*)(v5 + 8i64 * v4);
		if (v8)
		{
			v9 = (__int64*)dword_140A12138;
			if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
				v9 = *(__int64**)(a1 + 24);
			v10 = *((_DWORD*)v9 + 2);
			if (v10 != 3)
			{
				if (v10 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v14))
				{
				LABEL_14:
					v11 = *(_DWORD*)(v8 + 60);
					if (v1 < v11)
						v11 = v1;
					*(_DWORD*)(v8 + 56) = v11;
					return 0i64;
				}
				v13 = 3;
				v9 = &v12;
				v12 = v14;
			}
			v1 = (int)*(double*)v9;
			goto LABEL_14;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

