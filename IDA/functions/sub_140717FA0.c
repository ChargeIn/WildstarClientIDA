//----- (0000000140717FA0) ----------------------------------------------------
void __fastcall sub_140717FA0(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // r9
	unsigned __int64 v4; // rdx
	unsigned __int64 v5; // rcx
	_DWORD* v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	_QWORD* v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx

	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
	{
		v3 = (_QWORD*)(v2 + 64);
		v4 = 0i64;
		v5 = *(_QWORD*)(v2 + 72);
		if (v5)
		{
			v6 = (_DWORD*)*v3;
			while (*v6 != *(_DWORD*)(*(_QWORD*)(a1 + 56) + 92i64))
			{
				++v4;
				++v6;
				if (v4 >= v5)
					goto LABEL_8;
			}
			sub_1401C2F20((__int64)v3, v4);
		}
	LABEL_8:
		v7 = *(_QWORD*)(a1 + 96);
		if (*(_QWORD*)(v7 + 72))
		{
			v11 = sub_140561C30(qword_140C65B70, **(_DWORD**)(v7 + 64));
			if (v11)
			{
				v12 = *(_QWORD*)(v11 + 72);
				if (v12)
				{
					while (*(_DWORD*)(v12 + 64) != *(_DWORD*)(a1 + 64))
					{
						v12 = *(_QWORD*)(v12 + 40);
						if (!v12)
							goto LABEL_24;
					}
					*(_DWORD*)(*(_QWORD*)(a1 + 96) + 32i64) = *(_DWORD*)(v12 + 48);
				}
			}
		}
		else
		{
			v8 = *(_QWORD**)(v7 + 40);
			if (v8)
				*v8 = *(_QWORD*)(v7 + 48);
			v9 = *(_QWORD*)(v7 + 48);
			if (v9)
				*(_QWORD*)(v9 + 40) = *(_QWORD*)(v7 + 40);
			v10 = (_QWORD*)qword_140C65B88;
			*(_QWORD*)(v7 + 40) = 0i64;
			*(_QWORD*)(v7 + 48) = 0i64;
			if (!v10)
			{
				v10 = sub_14018B280(72i64, 0);
				if (v10)
					v10 = sub_1405B92D0(v10);
				qword_140C65B88 = (__int64)v10;
			}
			sub_1405BBEF0((__int64)v10, *(_DWORD*)(a1 + 64), *(_DWORD**)(a1 + 96));
		}
	LABEL_24:
		v13 = *(_QWORD*)(a1 + 96);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B88: using guessed type __int64 qword_140C65B88;

