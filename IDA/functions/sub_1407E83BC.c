//----- (00000001407E83BC) ----------------------------------------------------
__int64 __fastcall sub_1407E83BC(__int64 a1)
{
	int v2; // edi
	int v3; // esi
	__int64 v4; // rbx
	int v5; // eax

	v2 = 0;
	v3 = 227;
	while (1)
	{
		v4 = (v3 + v2) / 2;
		v5 = sub_1407E8858(a1, (unsigned __int16*)(&off_140960C20)[2 * v4], 85i64);
		if (!v5)
			break;
		if (v5 >= 0)
			v2 = v4 + 1;
		else
			v3 = v4 - 1;
		if (v2 > v3)
			return 0xFFFFFFFFi64;
	}
	return *((unsigned int*)&off_140960C20 + 4 * v4 + 2);
}
// 140960C20: using guessed type __int16 *off_140960C20;

