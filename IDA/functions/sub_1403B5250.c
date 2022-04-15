//----- (00000001403B5250) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403B5250(unsigned int a1)
{
	__int64 v1; // rax
	unsigned __int64 v2; // rcx

	if (a1 <= 0x14B && (v1 = sub_140237240(a1)) != 0 && (v2 = *(_QWORD*)(v1 + 8)) != 0 && v2 <= qword_140C3FE70)
		return v2 + qword_140C3FE68;
	else
		return 0i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

