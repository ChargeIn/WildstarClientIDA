//----- (00000001407E0920) ----------------------------------------------------
void __noreturn sub_1407E0920()
{
	if (sub_1407E0978())
		sub_1407E0A3C(0x16u);
	if ((dword_140C0F788 & 2) != 0)
	{
		if (IsProcessorFeaturePresent(0x17u))
			__fastfail(7u);
		sub_1407DC20C(3, 1073741845, 1);
	}
	sub_1407DBCC8(3u);
	JUMPOUT(0x1407E0974i64);
}
// 1407E096F: control flows out of bounds to 1407E0974
// 140C0F788: using guessed type int dword_140C0F788;

