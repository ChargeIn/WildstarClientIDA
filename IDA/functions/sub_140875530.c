//----- (0000000140875530) ----------------------------------------------------
__int64 __fastcall sub_140875530(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	unsigned int v4; // edi
	unsigned int v6; // eax

	v2 = *a2;
	v4 = *(_BYTE*)(a1 + 62) & 0x1F;
	v6 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD))(v2 + 376))(
		a2,
		*(unsigned __int8*)(a1 + 101),
		v4,
		v6);
}

