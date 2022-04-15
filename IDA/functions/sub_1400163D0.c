//----- (00000001400163D0) ----------------------------------------------------
void __fastcall sub_1400163D0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rdx
	_QWORD* i; // rax
	_QWORD* v4; // r8
	__int64 v5; // r8

	v1 = *(_QWORD*)(a1 + 5528);
	if (v1)
	{
		if (*(_QWORD*)(v1 + 24))
		{
			v4 = *(_QWORD**)(v1 + 24);
			if (v4)
				*v4 = *(_QWORD*)(v1 + 32);
			v5 = *(_QWORD*)(v1 + 32);
			if (v5)
				*(_QWORD*)(v5 + 24) = *(_QWORD*)(v1 + 24);
			*(_QWORD*)(v1 + 24) = 0i64;
			*(_QWORD*)(v1 + 32) = 0i64;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5528) + 8i64))(*(_QWORD*)(a1 + 5528));
		}
		else
		{
			*(_DWORD*)(v1 + 40) = 3;
			*(_DWORD*)(*(_QWORD*)(a1 + 5528) + 16i64) = 0;
			v2 = *(_QWORD*)(a1 + 5528);
			if (!*(_QWORD*)(v2 + 24))
			{
				for (i = (_QWORD*)(a1 + 5552); *i; i = (_QWORD*)(*i + 32i64))
					;
				*(_QWORD*)(v2 + 24) = i;
				*(_QWORD*)(v2 + 32) = 0i64;
				*i = v2;
			}
			(***(void(__fastcall****)(_QWORD))(a1 + 5528))(*(_QWORD*)(a1 + 5528));
		}
	}
}

