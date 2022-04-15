//----- (0000000140830F00) ----------------------------------------------------
__int64 __fastcall sub_140830F00(struct _RTL_CRITICAL_SECTION* a1, unsigned int a2, int a3)
{
	if (a3)
		a1 = (struct _RTL_CRITICAL_SECTION*)((char*)a1 + 1592);
	return sub_14083EDE0(a1, a2);
}

