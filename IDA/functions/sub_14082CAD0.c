//----- (000000014082CAD0) ----------------------------------------------------
__int64 __fastcall sub_14082CAD0(__int64 a1, __int64 a2)
{
	unsigned int v3; // edx
	int v4; // ebx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 64i64))(*(_QWORD*)(a2 + 8));
	v3 = *(_DWORD*)(a2 + 56);
	if (v3)
		sub_14083C260(qword_140C61B80, v3);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16i64))(*(_QWORD*)(a2 + 8));
	v4 = dword_140C10F20;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, 0i64);
	return sub_140881720(v4, a2);
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

