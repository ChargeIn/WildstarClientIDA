//----- (00000001407DC4D4) ----------------------------------------------------
void __fastcall sub_1407DC4D4(char* a1, __int64 a2, __int64 a3)
{
	if ((unsigned int)sub_1407E6BF4(a1, a2, (char*)a3))
	{
		sub_1407DC390();
		JUMPOUT(0x1407DC575i64);
	}
	if (*(_WORD*)(a3 + 128))
		sub_1407DCDF8(a1, a2, 2);
	if (*(_WORD*)(a3 + 256))
		sub_1407DCDF8(a1, a2, 2);
}
// 1407DC570: control flows out of bounds to 1407DC575

