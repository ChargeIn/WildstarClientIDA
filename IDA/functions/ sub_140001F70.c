//----- (0000000140001F70) ----------------------------------------------------
void __fastcall sub_140001F70(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	sub_1400020A0((__int64)a1);
	v2 = a1[60];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	sub_1400036F0(a1 + 13);
	v3 = a1[10];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v4 = a1[9];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
}

