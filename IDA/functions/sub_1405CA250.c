//----- (00000001405CA250) ----------------------------------------------------
__int64 __fastcall sub_1405CA250(__int64 a1, int a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // rbx
	unsigned __int64 v4; // rax
	__int64* v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v10; // rax
	unsigned int v11; // esi
	__int64 v12; // rax
	unsigned __int64 v13; // rcx
	_DWORD* i; // rax
	unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

	if (!a2 || (v2 = *(_QWORD*)(qword_140C65898 + 2712), v3 = 0i64, v4 = 0i64, !v2))
	{
	LABEL_7:
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		if (v7)
		{
			v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v7 + 192));
			if (v8)
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8) && sub_14039DFB0())
					return *(unsigned int*)(sub_14039DFB0() + 8);
			}
		}
		return 0i64;
	}
	v5 = *(__int64**)(qword_140C65898 + 2704);
	while (1)
	{
		v6 = *v5;
		if (*v5)
		{
			if (*(_DWORD*)(v6 + 64) == a2)
				break;
		}
		++v4;
		++v5;
		if (v4 >= v2)
			goto LABEL_7;
	}
	v10 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v10 || *(_DWORD*)(v10 + 592))
		return 0i64;
	v11 = *(_DWORD*)(v10 + 8);
	if ((unsigned int)sub_1405A4CE0(*v5, &v15) == 2)
	{
		v12 = sub_1405A4B80(v6, 1);
		if (v12)
		{
			v13 = *(unsigned int*)(v12 + 40);
			if (*(_DWORD*)(v12 + 40))
			{
				for (i = (_DWORD*)(*(_QWORD*)(v12 + 48) + 16i64); *i != 111; i += 42)
				{
					if (++v3 >= v13)
						return v11;
				}
				return v15;
			}
		}
	}
	return v11;
}
// 140C65898: using guessed type __int64 qword_140C65898;

