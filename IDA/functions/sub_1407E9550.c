//----- (00000001407E9550) ----------------------------------------------------
void __fastcall sub_1407E9550(unsigned __int16 a1, int a2, __int64 a3, _DWORD* a4)
{
	int v6; // ebx

	if (a2 > 0)
	{
		v6 = a2;
		do
		{
			--v6;
			sub_1407E9518(a1, a3, a4);
		} while (*a4 != -1 && v6 > 0);
	}
}
