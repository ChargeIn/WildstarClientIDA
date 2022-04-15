//----- (00000001407E8588) ----------------------------------------------------
__int64 __fastcall sub_1407E8588(__int64 a1)
{
	int v1; // eax

	if (a1 && (v1 = sub_1407E83BC(a1), v1 >= 0) && (unsigned __int64)v1 < 0xE4)
		return *((unsigned int*)&unk_140961A60 + 4 * v1);
	else
		return 0i64;
}

