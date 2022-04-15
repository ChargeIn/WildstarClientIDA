//----- (00000001409198E0) ----------------------------------------------------
__int64 __fastcall sub_1409198E0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // rax
	unsigned __int16 v3; // r8
	unsigned __int16 v4; // cx

	v2 = a1 - (_QWORD)a2;
	while (1)
	{
		v3 = *(unsigned __int16*)((char*)a2 + v2);
		if (!v3 && !*a2)
			break;
		v4 = *a2++;
		if (v3 != v4)
			return 2 * (unsigned int)(v3 > v4) - 1;
	}
	return 0i64;
}

