//----- (0000000140866030) ----------------------------------------------------
_QWORD* __fastcall sub_140866030(__int64 a1)
{
	_QWORD* v1; // rbx
	_QWORD* v2; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* result; // rax

	v1 = *(_QWORD**)a1;
	v2 = *(_QWORD**)(a1 + 8);
	if (*(_QWORD**)a1 == v2)
	{
		*(_QWORD*)(a1 + 8) = v1;
	}
	else
	{
		do
		{
			v4 = v1[1];
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				v1[1] = 0i64;
			}
			v5 = v1[3];
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
				v1[3] = 0i64;
			}
			if (*v1)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 16i64))(*v1);
				*v1 = 0i64;
			}
			v1 += 5;
		} while (v1 != v2);
		result = *(_QWORD**)a1;
		*(_QWORD*)(a1 + 8) = *(_QWORD*)a1;
	}
	return result;
}

