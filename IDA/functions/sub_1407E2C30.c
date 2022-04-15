//----- (00000001407E2C30) ----------------------------------------------------
LPVOID __fastcall sub_1407E2C30(SIZE_T dwBytes)
{
	int v1; // esi
	DWORD v2; // edi
	LPVOID v4; // rbx

	v1 = dword_140C603B0;
	v2 = 0;
	do
	{
		v4 = sub_1407E1500(dwBytes);
		if (v4 || !v1)
			break;
		Sleep(v2);
		v1 = dword_140C603B0;
		v2 += 1000;
		if (v2 > dword_140C603B0)
			v2 = -1;
	} while (v2 != -1);
	return v4;
}
// 140C603B0: using guessed type int dword_140C603B0;

