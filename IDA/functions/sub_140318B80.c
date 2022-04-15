//----- (0000000140318B80) ----------------------------------------------------
void __fastcall sub_140318B80(__int64 a1, __int64 a2)
{
	unsigned __int16** v4; // rcx
	unsigned __int16** v5; // rcx
	float v6; // [rsp+58h] [rbp+10h] BYREF

	switch (*(_DWORD*)(a2 + 104))
	{
	case 1:
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 8), *(float**)(a1 + 24));
		return;
	case 2:
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 32), *(float**)(a1 + 24));
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 8), &v6);
		**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 12)) * (float)(**(float**)(a1 + 24) - v6)) + v6;
		return;
	case 3:
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 56), *(float**)(a1 + 24));
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 32), &v6);
		break;
	case 4:
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 80), *(float**)(a1 + 24));
		sub_1403091C0(*(unsigned __int16***)(a1 + 32), *(_DWORD*)(a2 + 56), &v6);
		v4 = *(unsigned __int16***)(a1 + 32);
		**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 60)) * (float)(**(float**)(a1 + 24) - v6)) + v6;
		sub_1403091C0(v4, *(_DWORD*)(a2 + 32), &v6);
		break;
	default:
		return;
	}
	v5 = *(unsigned __int16***)(a1 + 32);
	**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 36)) * (float)(**(float**)(a1 + 24) - v6)) + v6;
	sub_1403091C0(v5, *(_DWORD*)(a2 + 8), &v6);
	**(float**)(a1 + 24) = (float)((float)(1.0 - *(float*)(a2 + 12)) * (float)(**(float**)(a1 + 24) - v6)) + v6;
}

