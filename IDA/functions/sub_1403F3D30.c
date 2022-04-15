//----- (00000001403F3D30) ----------------------------------------------------
__int64 __fastcall sub_1403F3D30(_QWORD* a1, unsigned int* a2)
{
	BOOL v4; // ebp
	__int64 v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // r9
	void(__fastcall * v8)(__int64, __int64, _QWORD, __int64, char*, _QWORD); // r10
	__int64 v9; // rcx
	char* v10; // r8
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	char v14[16]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v15; // [rsp+40h] [rbp-38h]

	sub_1403F3B50(a1, a2);
	v4 = *a2 == 0;
	sub_140400E10((__int64)v14, (__int64)a2);
	v5 = a1[3330];
	if (v5)
	{
		do
		{
			v6 = *(_QWORD*)(v5 + 24);
			if (*(_DWORD*)(v5 + 32) == a2[2] && *(_QWORD*)(v5 + 40) == *((_QWORD*)a2 + 2))
			{
				v7 = *a2;
				v8 = *(void(__fastcall**)(__int64, __int64, _QWORD, __int64, char*, _QWORD))(v5 + 8);
				v9 = *(_QWORD*)v5;
				*(_QWORD*)(v5 + 8) = 0i64;
				*(_QWORD*)v5 = 0i64;
				v10 = v14;
				if (!v4)
					v10 = 0i64;
				v8(v9, v5 + 32, *(unsigned int*)(v5 + 56), v7, v10, *(_QWORD*)(v5 + 48));
				v11 = *(_QWORD**)(v5 + 16);
				if (v11)
					*v11 = *(_QWORD*)(v5 + 24);
				v12 = *(_QWORD*)(v5 + 24);
				if (v12)
					*(_QWORD*)(v12 + 16) = *(_QWORD*)(v5 + 16);
				*(_QWORD*)(v5 + 16) = 0i64;
				*(_QWORD*)(v5 + 24) = 0i64;
				sub_14018B900(v5, 0);
			}
			v5 = v6;
		} while (v6);
	}
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	return 0i64;
}

