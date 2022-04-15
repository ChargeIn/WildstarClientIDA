//----- (0000000140607490) ----------------------------------------------------
__int64 __fastcall sub_140607490(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 120) = *(unsigned __int8*)(a2 + 24);
	*(_DWORD*)(a1 + 124) = *(unsigned __int8*)(a2 + 25);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 28);
	*(float*)(a1 + 156) = sub_1401C9770((unsigned __int16*)(a2 + 32));
	sub_1407E15B8((int*)(a1 + 132), 0x14ui64, (int*)(a2 + 34), 0x14ui64);
	*(_DWORD*)(a1 + 160) = (int)sub_1401C9770((unsigned __int16*)(a2 + 54));
	*(_DWORD*)(a1 + 164) = (int)sub_1401C9770((unsigned __int16*)(a2 + 56));
	*(_DWORD*)(a1 + 168) = (int)sub_1401C9770((unsigned __int16*)(a2 + 58));
	*(_DWORD*)(a1 + 172) = (int)sub_1401C9770((unsigned __int16*)(a2 + 60));
	*(_DWORD*)(a1 + 176) = (int)sub_1401C9770((unsigned __int16*)(a2 + 62));
	*(_DWORD*)(a1 + 180) = (int)sub_1401C9770((unsigned __int16*)(a2 + 64));
	*(_DWORD*)(a1 + 184) = (int)sub_1401C9770((unsigned __int16*)(a2 + 66));
	*(_DWORD*)(a1 + 188) = (int)sub_1401C9770((unsigned __int16*)(a2 + 68));
	*(float*)(a1 + 192) = sub_1401C9770((unsigned __int16*)(a2 + 70));
	*(float*)(a1 + 196) = sub_1401C9770((unsigned __int16*)(a2 + 72));
	*(_DWORD*)(a1 + 236) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 240) = *(_DWORD*)(a2 + 84);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 88);
	*(_DWORD*)(a1 + 244) = (int)sub_1401C9770((unsigned __int16*)(a2 + 74));
	result = (unsigned int)(int)sub_1401C9770((unsigned __int16*)(a2 + 76));
	*(_DWORD*)(a1 + 248) = result;
	return result;
}

