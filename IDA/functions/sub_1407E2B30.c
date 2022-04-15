//----- (00000001407E2B30) ----------------------------------------------------
char __fastcall sub_1407E2B30(__int64 a1)
{
	__int64 v2; // rax

	LOBYTE(v2) = sub_1407E2B80(0x140000000i64);
	if ((_DWORD)v2)
	{
		v2 = sub_1407E2AE0(0x140000000i64, a1 - 0x140000000i64);
		if (v2)
			LOBYTE(v2) = *(int*)(v2 + 36) >= 0;
	}
	return v2;
}
// 1407E2B4E: variable 'v2' is possibly undefined

