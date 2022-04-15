#include "../winhttp.h"

//----- (0000000140627670) ----------------------------------------------------
__int64 __fastcall sub_140627670(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // [rsp+28h] [rbp-69h] BYREF
	_QWORD v29[3]; // [rsp+30h] [rbp-61h]
	__int64 v30; // [rsp+48h] [rbp-49h] BYREF
	int v31; // [rsp+50h] [rbp-41h]
	__int64 v32; // [rsp+54h] [rbp-3Dh]
	__int64 v33; // [rsp+5Ch] [rbp-35h]
	int v34; // [rsp+64h] [rbp-2Dh]
	__int64 v35; // [rsp+68h] [rbp-29h] BYREF
	int v36; // [rsp+70h] [rbp-21h]
	__int64 v37; // [rsp+74h] [rbp-1Dh]
	__int64 v38; // [rsp+7Ch] [rbp-15h]
	int v39; // [rsp+84h] [rbp-Dh]
	__int64 v40; // [rsp+88h] [rbp-9h] BYREF
	int v41; // [rsp+90h] [rbp-1h]
	__int64 v42; // [rsp+94h] [rbp+3h]
	__int64 v43; // [rsp+9Ch] [rbp+Bh]
	int v44; // [rsp+A4h] [rbp+13h]
	__int64 v45; // [rsp+A8h] [rbp+17h] BYREF
	int v46; // [rsp+B0h] [rbp+1Fh]
	__int64 v47; // [rsp+B4h] [rbp+23h]
	__int64 v48; // [rsp+BCh] [rbp+2Bh]
	int v49; // [rsp+C4h] [rbp+33h]
	__int64 v50; // [rsp+C8h] [rbp+37h] BYREF
	int v51; // [rsp+D0h] [rbp+3Fh]
	__int64 v52; // [rsp+D4h] [rbp+43h]
	__int64 v53; // [rsp+DCh] [rbp+4Bh]
	int v54; // [rsp+E4h] [rbp+53h]
	void* retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

	result = (__int64)&retaddr;
	*(_DWORD*)(a1 + 168) = a2;
	if (a2)
	{
		GetCursorPos((LPPOINT)(a1 + 172));
		ScreenToClient(*(HWND*)(qword_140C635F0 + 8), (LPPOINT)(a1 + 172));
		result = *(int*)(a1 + 184);
		switch ((int)result)
		{
		case 0:
			*(_DWORD*)(a1 + 180) = 0;
			*(_DWORD*)(a1 + 168) = 0;
			goto LABEL_25;
		case 1:
			v4 = *(_QWORD*)(a1 + 96);
			*(_DWORD*)(a1 + 180) = 1;
			if (!v4)
				goto LABEL_25;
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 328i64))(v4);
			v45 = 1122i64;
			v47 = 0i64;
			v48 = 0i64;
			v49 = 0;
			v46 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v45);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		case 2:
			v6 = *(_QWORD*)(a1 + 104);
			*(_DWORD*)(a1 + 180) = 2;
			if (!v6)
				goto LABEL_25;
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 328i64))(v6);
			v50 = 1122i64;
			v52 = 0i64;
			v53 = 0i64;
			v54 = 0;
			v51 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v7 + 584i64))(v7, 0i64, &v50);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		case 3:
			v8 = *(_QWORD*)(a1 + 112);
			*(_DWORD*)(a1 + 180) = 3;
			if (!v8)
				goto LABEL_25;
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 328i64))(v8);
			v30 = 1122i64;
			v32 = 0i64;
			v33 = 0i64;
			v34 = 0;
			v31 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v30);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		case 4:
			result = sub_1406285F0((__m128*)a1);
			if ((int)result < 0)
				goto LABEL_25;
			if (!*(_DWORD*)(a1 + 240))
				goto LABEL_25;
			result = sub_140628770((float*)a1, (int*)(a1 + 172), a1 + 192);
			if ((int)result < 0)
				goto LABEL_25;
			v10 = *(_QWORD*)(a1 + 120);
			*(_DWORD*)(a1 + 180) = 4;
			if (!v10)
				goto LABEL_25;
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 328i64))(v10);
			v35 = 1122i64;
			v37 = 0i64;
			v38 = 0i64;
			v39 = 0;
			v36 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v35);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		case 5:
			result = sub_1406285F0((__m128*)a1);
			if ((int)result < 0)
				goto LABEL_25;
			if (!*(_DWORD*)(a1 + 240))
				goto LABEL_25;
			result = sub_140628770((float*)a1, (int*)(a1 + 172), a1 + 192);
			if ((int)result < 0)
				goto LABEL_25;
			v12 = *(_QWORD*)(a1 + 128);
			*(_DWORD*)(a1 + 180) = 5;
			if (!v12)
				goto LABEL_25;
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 328i64))(v12);
			v40 = 1122i64;
			v42 = 0i64;
			v43 = 0i64;
			v44 = 0;
			v41 = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v13 + 584i64))(v13, 0i64, &v40);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		case 6:
			result = sub_1406285F0((__m128*)a1);
			if ((int)result < 0)
				goto LABEL_25;
			if (!*(_DWORD*)(a1 + 240))
				goto LABEL_25;
			result = sub_140628770((float*)a1, (int*)(a1 + 172), a1 + 192);
			if ((int)result < 0)
				goto LABEL_25;
			v14 = *(_QWORD*)(a1 + 136);
			*(_DWORD*)(a1 + 180) = 6;
			if (!v14)
				goto LABEL_25;
			v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 328i64))(v14);
			v28 = 1122i64;
			*(_OWORD*)((char*)v29 + 4) = 0ui64;
			HIDWORD(v29[2]) = 0;
			LODWORD(v29[0]) = 1065353216;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v15 + 584i64))(v15, 0i64, &v28);
			*(_DWORD*)(a1 + 184) = 0;
			break;
		default:
		LABEL_25:
			*(_DWORD*)(a1 + 184) = 0;
			break;
		}
	}
	else
	{
		v16 = *(_QWORD*)(a1 + 96);
		if (v16)
		{
			v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 328i64))(v16);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v17 + 584i64))(v17, 0i64, &v28);
		}
		v18 = *(_QWORD*)(a1 + 104);
		if (v18)
		{
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 328i64))(v18);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 584i64))(v19, 0i64, &v28);
		}
		v20 = *(_QWORD*)(a1 + 112);
		if (v20)
		{
			v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 328i64))(v20);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v21 + 584i64))(v21, 0i64, &v28);
		}
		v22 = *(_QWORD*)(a1 + 120);
		if (v22)
		{
			v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 328i64))(v22);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v23 + 584i64))(v23, 0i64, &v28);
		}
		v24 = *(_QWORD*)(a1 + 128);
		if (v24)
		{
			v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 328i64))(v24);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v25 + 584i64))(v25, 0i64, &v28);
		}
		v26 = *(_QWORD*)(a1 + 136);
		if (v26)
		{
			v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 328i64))(v26);
			v28 = 1118i64;
			v29[0] = 1065353216i64;
			*(_OWORD*)&v29[1] = 0ui64;
			return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v27 + 584i64))(v27, 0i64, &v28);
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

