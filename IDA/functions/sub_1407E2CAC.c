//----- (00000001407E2CAC) ----------------------------------------------------
LPVOID __fastcall sub_1407E2CAC(LPVOID lpMem, SIZE_T dwBytes)
{
	DWORD v2; // ebx
	LPVOID v5; // rdi

	v2 = 0;
	do
	{
		v5 = sub_1407F0524(lpMem, dwBytes);
		if (v5 || !dwBytes || !dword_140C603B0)
			break;
		Sleep(v2);
		v2 += 1000;
		if (v2 > dword_140C603B0)
			v2 = -1;
	} while (v2 != -1);
	return v5;
}
// 140C603B0: using guessed type int dword_140C603B0;

