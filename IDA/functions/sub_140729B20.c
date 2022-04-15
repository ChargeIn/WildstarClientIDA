//----- (0000000140729B20) ----------------------------------------------------
__int64 __fastcall sub_140729B20(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rcx
	_QWORD** v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx

	result = (unsigned int)(*(_DWORD*)(a1 + 20) - 10);
	if ((unsigned int)result > 1)
	{
		v3 = *(_QWORD*)(a1 + 1440);
		v4 = *(_QWORD*)(v3 + 56);
		if (v4 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 80i64))(v4))
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v3 + 56) + 72i64))(
				*(_QWORD*)(v3 + 56),
				100i64,
				2i64);
		v5 = *(_QWORD*)(a1 + 1448);
		v6 = *(_QWORD*)(v5 + 56);
		if (v6 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 80i64))(v6))
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v5 + 56) + 72i64))(
				*(_QWORD*)(v5 + 56),
				100i64,
				2i64);
		v7 = *(_QWORD***)(a1 + 1472);
		v8 = *v7;
		if (*v7 != v7)
		{
			do
			{
				v9 = (__int64)v8;
				v8 = (_QWORD*)*v8;
				sub_14018B900(v9, 0);
			} while (v8 != *(_QWORD**)(a1 + 1472));
		}
		**(_QWORD**)(a1 + 1472) = *(_QWORD*)(a1 + 1472);
		result = *(_QWORD*)(a1 + 1472);
		*(_QWORD*)(result + 8) = result;
		*(_DWORD*)(a1 + 1460) = 0;
	}
	return result;
}

