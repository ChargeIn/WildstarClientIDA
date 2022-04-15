//----- (0000000140774360) ----------------------------------------------------
__int64 __fastcall sub_140774360(__int64 a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	unsigned __int64 i; // rdi
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	_QWORD** v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			for (i = 0i64; i < v3[4]; ++i)
			{
				v5 = *(void(__fastcall****)(_QWORD, __int64))(v3[3] + 8 * i);
				if (v5)
					(**v5)(v5, 1i64);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 56));
	}
	v6 = *(_QWORD***)(a1 + 56);
	v7 = *v6;
	if (*v6 != v6)
	{
		do
		{
			v8 = (__int64)v7;
			v7 = (_QWORD*)*v7;
			v9 = *(_QWORD*)(v8 + 24);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
			sub_14018B900(v8, 0);
		} while (v7 != *(_QWORD**)(a1 + 56));
	}
	**(_QWORD**)(a1 + 56) = *(_QWORD*)(a1 + 56);
	result = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(result + 8) = result;
	return result;
}

