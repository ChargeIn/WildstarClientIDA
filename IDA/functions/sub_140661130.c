//----- (0000000140661130) ----------------------------------------------------
__int64 __fastcall sub_140661130(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // r14
	__int64 v5; // r15
	unsigned __int64 v6; // rbp
	int v7; // esi
	_QWORD* v8; // rbx
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	_DWORD* v12; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = qword_140C65898;
		v5 = v3 + 416;
		v6 = (*(__int64(__fastcall**)(__int64))(qword_140C65898 + 27184))(v3 + 416);
		v7 = 0;
		v8 = *(_QWORD**)(*(_QWORD*)(v4 + 27176) + 8 * (v6 % *(_QWORD*)(v4 + 27168)));
		if (!v8)
			goto LABEL_9;
		while (v6 != *v8 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v4 + 27192))(v5, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_9;
		}
		v9 = 1;
		if (v8 == (_QWORD*)-32i64)
			LABEL_9:
		v9 = 0;
		v10 = *(_DWORD**)(a1 + 16);
		LOBYTE(v7) = v9 != 0;
		v10[2] = 1;
		result = 1i64;
		*v10 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v12 = *(_DWORD**)(a1 + 16);
		*v12 = 0;
		v12[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

