//----- (000000014017FC30) ----------------------------------------------------
__int64 __fastcall sub_14017FC30(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int v3; // eax
	__int64 v4; // rax
	unsigned __int64 v5; // rcx
	void* v6; // rdx

	v2 = sub_14017F690(a1);
	v3 = sub_140056D60(a1, 2u);
	*(_DWORD*)(v2 + 2180) = v3;
	if (!v3)
	{
		v6 = &unk_1409DE84C;
	LABEL_8:
		(*(void(__fastcall**)(_QWORD, void*, _QWORD))(**(_QWORD**)(v2 + 2136) + 808i64))(
			*(_QWORD*)(v2 + 2136),
			v6,
			0i64);
		return 0i64;
	}
	v4 = sub_1401F4720(v3);
	if (v4)
	{
		v5 = *(_QWORD*)(v4 + 8);
		if (v5 && v5 <= qword_140C3FE70)
			v6 = (void*)(v5 + qword_140C3FE68);
		else
			v6 = 0i64;
		goto LABEL_8;
	}
	return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

