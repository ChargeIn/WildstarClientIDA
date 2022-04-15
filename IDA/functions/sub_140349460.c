//----- (0000000140349460) ----------------------------------------------------
__int64 __fastcall sub_140349460(__int64 a1)
{
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rax

	if (!a1)
		return 0i64;
	v2 = (*(__int64 (**)(void))(*(_QWORD*)a1 + 48i64))();
	v3 = *((_QWORD*)&xmmword_140C7AAE0 + (v2 & 7));
	if (!v3)
		return 0i64;
	while (1)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 24) + 48i64))(*(_QWORD*)(v3 + 24));
		if (v2 == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4))
			break;
		v3 = *(_QWORD*)(v3 + 40);
		if (!v3)
			return 0i64;
	}
	return v3;
}
// 140C7AAE0: using guessed type __int128 xmmword_140C7AAE0;

