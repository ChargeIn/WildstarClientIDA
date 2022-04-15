//----- (00000001405257A0) ----------------------------------------------------
float __fastcall sub_1405257A0(__int64 a1)
{
	__int64 v2; // rcx
	int v4; // ebx
	int v5; // eax

	v2 = *(_QWORD*)(a1 + 1472);
	if (!v2)
		return 0.0;
	v4 = *(_DWORD*)(a1 + 1480);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 40i64))(v2);
	if (v4 == -1)
		return 0.0;
	if (v5 && dword_140C636A8 - v4 < (unsigned int)v5)
		return (float)(dword_140C636A8 - v4) / (float)v5;
	return 1.0;
}
// 140C636A8: using guessed type int dword_140C636A8;

