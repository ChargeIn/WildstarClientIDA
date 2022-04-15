//----- (00000001403F3E60) ----------------------------------------------------
__int64 __fastcall sub_1403F3E60(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // r8
	void(__fastcall * v7)(__int64, _QWORD, __int64, _QWORD); // rax
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx

	sub_1400167A0(a1, *(_DWORD*)a2, *(int**)(a2 + 8));
	v4 = *(_QWORD*)(a1 + 26648);
	if (v4)
	{
		do
		{
			v5 = *(_QWORD*)(v4 + 24);
			if (*(_DWORD*)(v4 + 32) == *(_DWORD*)a2)
			{
				v6 = *(_QWORD*)(a2 + 8);
				v7 = *(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(v4 + 8);
				v8 = *(_QWORD*)v4;
				*(_QWORD*)(v4 + 8) = 0i64;
				*(_QWORD*)v4 = 0i64;
				v7(v8, *(unsigned int*)(v4 + 32), v6, *(_QWORD*)(v4 + 40));
				v9 = *(_QWORD**)(v4 + 16);
				if (v9)
					*v9 = *(_QWORD*)(v4 + 24);
				v10 = *(_QWORD*)(v4 + 24);
				if (v10)
					*(_QWORD*)(v10 + 16) = *(_QWORD*)(v4 + 16);
				*(_QWORD*)(v4 + 16) = 0i64;
				*(_QWORD*)(v4 + 24) = 0i64;
				sub_14018B900(v4, 0);
			}
			v4 = v5;
		} while (v5);
	}
	return 0i64;
}

