//----- (000000014006A190) ----------------------------------------------------
void __fastcall sub_14006A190(__int64 a1, int a2)
{
	__int64 v3; // r10
	__int64 v4; // r9
	unsigned int* v5; // r8
	__int64 v6; // rcx

	for (; a2 != -1; a2 += (*(_DWORD*)(v3 + v6) >> 14) - 0x1FFFF + 1)
	{
		v3 = 4i64 * a2;
		v4 = v3 + *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		if (a2 < 1 || (v5 = (unsigned int*)(v4 - 4), byte_140A12408[*(_DWORD*)(v4 - 4) & 0x3F] >= 0))
			v5 = (unsigned int*)(v3 + *(_QWORD*)(*(_QWORD*)a1 + 24i64));
		if ((*(_BYTE*)v5 & 0x3F) == 27)
			*v5 = *v5 & 0x7FC000 | ((*v5 & 0xFF81FFFF | 0x340000) >> 17);
		v6 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		if (*(_DWORD*)(v3 + v6) >> 14 == 131070)
			break;
	}
}

