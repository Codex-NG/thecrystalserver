-- Ba�s Annihilator Quest
-- by Nottinghster

function onUse(cid, item, frompos, item2, topos)

if item.uid == 5006 then
		queststatus = getPlayerStorageValue(cid,5010)
	if queststatus == -1 then
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"You have found a Demon Armor.")
		doPlayerAddItem(cid,2494,1)
		setPlayerStorageValue(cid,5010,1)
	else
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"The chest is empty.")
end
		
elseif item.uid == 5007 then
		queststatus = getPlayerStorageValue(cid,5010)
	if queststatus == -1 then
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"You have found a Magic Sword.")
		doPlayerAddItem(cid,2400,1)
		setPlayerStorageValue(cid,5010,1)
	else
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"The chest is empty.")
end
		
elseif item.uid == 5008 then
		queststatus = getPlayerStorageValue(cid,5010)
	if queststatus == -1 then
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"You have found a Stonecutter's Axe.")
		doPlayerAddItem(cid,2431,1)
		setPlayerStorageValue(cid,5010,1)
	else
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"The chest is empty.")
end

elseif item.uid == 5009 then
		queststatus = getPlayerStorageValue(cid,5010)
	if queststatus == -1 then
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"You have found a Thunder Hammer.")
		doPlayerAddItem(cid,2421,1)
		setPlayerStorageValue(cid,5010,1)
	else
		doPlayerSendTextMessage(cid,MESSAGE_INFO_DESC,"The chest is empty.")
end

	else
	  return FALSE
end
	  return TRUE
end
