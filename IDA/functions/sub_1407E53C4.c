//----- (00000001407E53C4) ----------------------------------------------------
void __fastcall sub_1407E53C4(__int64 a1)
{
	void* v2; // rcx
	void* v3; // rcx
	void* v4; // rcx
	void* v5; // rcx
	void* v6; // rcx

	if (a1)
	{
		v2 = *(void**)a1;
		if (v2 != off_140C0F6F0)
			sub_1407E14C0(v2);
		v3 = *(void**)(a1 + 8);
		if (v3 != off_140C0F6F8)
			sub_1407E14C0(v3);
		v4 = *(void**)(a1 + 16);
		if (v4 != off_140C0F700)
			sub_1407E14C0(v4);
		v5 = *(void**)(a1 + 88);
		if (v5 != off_140C0F748)
			sub_1407E14C0(v5);
		v6 = *(void**)(a1 + 96);
		if (v6 != off_140C0F750)
			sub_1407E14C0(v6);
	}
}
// 140C0F6F0: using guessed type void *off_140C0F6F0;
// 140C0F6F8: using guessed type void *off_140C0F6F8;
// 140C0F700: using guessed type void *off_140C0F700;
// 140C0F748: using guessed type void *off_140C0F748;
// 140C0F750: using guessed type void *off_140C0F750;

